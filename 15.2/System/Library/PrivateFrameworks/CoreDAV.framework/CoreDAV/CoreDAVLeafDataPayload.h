@class NSString, NSArray, NSURL, NSData;

@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload>

@property (retain, nonatomic) NSURL *serverID;
@property (readonly, nonatomic) NSData *dataPayload;
@property (readonly, nonatomic) NSString *syncKey;
@property (readonly, nonatomic) NSArray *childrenOrder;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) NSURL *destinationURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 eTag:(id)a1 dataPayload:(id)a2 inContainerWithURL:(id)a3 withAccountInfoProvider:(id)a4;

@end
