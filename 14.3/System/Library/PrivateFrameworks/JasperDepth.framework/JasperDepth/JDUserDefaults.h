@class NSNumber, NSUserDefaults;

@interface JDUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}

@property (readonly) NSNumber *reflectivityFilterThreshold;

- (id)init;
- (void).cxx_destruct;
- (id)getNumber:(id)a0;

@end
