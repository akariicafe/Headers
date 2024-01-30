@class NSString;

@interface APOdmlSettings : NSObject

@property (readonly, nonatomic) int deploymentID;
@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *treatmentID;
@property (readonly, nonatomic) NSString *odmlNamespace;
@property (readonly, nonatomic) int odmlVersion;

- (id)init;

@end
