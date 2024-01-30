@class HMDUser, NSData;

@interface HMDUserCloudShareEstablishShareRequest : HMDUserCloudShareRequest

@property (readonly, weak) HMDUser *fromUser;
@property (readonly, weak) HMDUser *toUser;
@property (readonly) NSData *encodedShareURL;
@property (readonly) NSData *shareToken;
@property (readonly, copy) id /* block */ completion;

- (void).cxx_destruct;
- (id)description;
- (id)initWithHome:(id)a0 fromUser:(id)a1 toUser:(id)a2 encodedShareURL:(id)a3 shareToken:(id)a4 containerID:(id)a5 currentDate:(id)a6 completion:(id /* block */)a7;

@end
