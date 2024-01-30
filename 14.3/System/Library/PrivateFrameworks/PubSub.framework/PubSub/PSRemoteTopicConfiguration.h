@class NSString, NSSet;

@interface PSRemoteTopicConfiguration : HMFObject

@property (readonly) NSString *name;
@property (readonly, copy) NSSet *supportedTransportIdentifiers;

- (void).cxx_destruct;
- (id)initWithTopicName:(id)a0 supportedTransportIdentifiers:(id)a1;

@end
