@class NSString, WFAirQualityProviderStation, NSURL, UIImage, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface WFAirQualityProviderAttribution : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) WFAirQualityProviderAttribution *defaultProviderAttribution;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *logoURL;
@property (nonatomic) long long dataOrigination;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logoImageLoadingQueue;
@property (retain, nonatomic) NSMutableArray *outstandingRequestsCompletionBlocks;
@property (nonatomic) BOOL logoRequestInFlight;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (copy, nonatomic) UIImage *cachedLogoImage;
@property (retain, nonatomic) WFAirQualityProviderStation *station;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)loadLogoImageWithCompletion:(id /* block */)a0;
- (id)initWithName:(id)a0 logoURL:(id)a1 dataOrigination:(long long)a2 station:(id)a3;
- (void)_initInternal;
- (id)initWithName:(id)a0 logoImage:(id)a1 dataOrigination:(long long)a2 station:(id)a3;
- (void)p_loadRemoteLogoImageForProvider:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_checkRequestInFlight;
- (void)p_queueCompletionBlock:(id /* block */)a0;
- (void)p_setRequestInFlight;
- (id)p_imageWithData:(id)a0;
- (void)p_invokeAndClearCompletionBlocksWithImage:(id)a0 error:(id)a1;
- (void)p_clearRequestInFlight;
- (id)initWithName:(id)a0 logoURL:(id)a1 dataOrigination:(long long)a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
