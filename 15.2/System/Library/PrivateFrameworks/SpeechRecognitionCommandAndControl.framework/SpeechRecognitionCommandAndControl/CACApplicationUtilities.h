@interface CACApplicationUtilities : NSObject

+ (id)runningApplications;
+ (id)installedApplications;
+ (void)launchApplicationWithIdentifier:(id)a0;
+ (id)targetApplications;

@end
