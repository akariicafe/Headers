@class NSString, NSIndexSet;

@interface _SSVPlayActivityFlushSessionInformation : NSObject

@property (copy, nonatomic) NSString *endpointIdentifier;
@property (retain, nonatomic) NSIndexSet *revisionsIndexSet;
@property (copy, nonatomic) NSString *revisionVersionToken;
@property (nonatomic) unsigned long long sessionToken;

- (void).cxx_destruct;

@end
