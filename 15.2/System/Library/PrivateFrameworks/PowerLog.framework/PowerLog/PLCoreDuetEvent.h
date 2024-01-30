@class NSString, NSDictionary, NSArray;

@interface PLCoreDuetEvent : NSObject

@property (retain) NSString *bundleID;
@property unsigned char updateType;
@property (retain) NSString *processName;
@property (retain) NSDictionary *childBundleIDToWeight;
@property (retain) NSArray *eventIntervals;

- (id)description;
- (void).cxx_destruct;

@end
