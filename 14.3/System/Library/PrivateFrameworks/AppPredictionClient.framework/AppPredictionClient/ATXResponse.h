@class NSUUID, NSArray, NSData, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface ATXResponse : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_appClipQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *predictedApps;
@property (readonly, nonatomic) NSArray *predictions;
@property (readonly, nonatomic) NSArray *proactiveSuggestions;
@property (readonly, nonatomic) NSUUID *blendingModelUICacheUpdateUUID;
@property (readonly, nonatomic) NSData *cacheFileData;

- (id)jsonRawData;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPredictions:(id)a0 cacheFileData:(id)a1 error:(id)a2;
- (id)json;
- (BOOL)isEqualToResponse:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)jsonDescription;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPredictions:(id)a0 proactiveSuggestions:(id)a1 uuid:(id)a2 cacheFileData:(id)a3 blendingUICacheUpdateUUID:(id)a4 error:(id)a5;
- (void)enumerateAtxSearchResults:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
