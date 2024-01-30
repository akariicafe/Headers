@class NSMutableDictionary, NSDictionary, NSString, NSObject, MPCAssistantEncodings;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface MPAssistantGetStateResponseRemote : SAMPGetStateResponseRemote {
    NSDictionary *_decodedDeviceUIDs;
    NSMutableDictionary *_workingRemoteResponse;
    NSMutableDictionary *_originMapping;
    NSObject<OS_dispatch_queue> *_responseCollectionQueue;
    NSObject<OS_dispatch_group> *_completionGroup;
    MPCAssistantEncodings *_encoder;
    NSString *_requestAceHash;
}

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setPlayingInfoFromEndpoint:(void *)a0;

@end
