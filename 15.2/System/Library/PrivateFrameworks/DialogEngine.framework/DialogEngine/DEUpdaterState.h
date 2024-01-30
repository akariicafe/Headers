@class NSData, NSString, DEFilter;

@interface DEUpdaterState : NSObject

@property (retain, nonatomic) NSData *builtinVersion;
@property (retain, nonatomic) NSData *syncedVersion;
@property (retain, nonatomic) NSString *publicationURL;
@property (retain, nonatomic) NSString *publicationId;
@property BOOL disabled;
@property (retain, nonatomic) DEFilter *filter;
@property (retain, nonatomic) NSString *backgroundId;
@property (retain, nonatomic) NSData *latestVersion;
@property (retain, nonatomic) NSData *promotedVersion;

+ (id)stateFromPb:(const void *)a0;
+ (void)stateToPb:(id)a0 statePb:(void *)a1;

- (void).cxx_destruct;

@end
