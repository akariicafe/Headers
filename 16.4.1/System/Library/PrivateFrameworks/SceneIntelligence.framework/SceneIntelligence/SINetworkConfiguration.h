@class NSString, NSMutableSet;

@interface SINetworkConfiguration : NSObject

@property (retain) NSString *networkPath;
@property long long engineType;
@property BOOL runByE5RT;
@property (retain) NSMutableSet *disabledOutputBlobs;
@property (retain) NSString *loggerPrefix;
@property BOOL supportZeroCopy;
@property (readonly) NSString *networkMode;
@property (readonly) NSString *networkName;

+ (id)algorithmClass;

- (void)setNetworkName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setNetworkMode:(id)a0;

@end
