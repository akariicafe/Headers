@class NSString, NSDictionary, NSArray;

@interface PLCoreDuetEvent : NSObject

@property (retain) NSString *bundleID;
@property unsigned char updateType;
@property (retain) NSString *processName;
@property (retain) NSDictionary *childBundleIDToWeight;
@property (retain) NSArray *eventIntervals;

- (void).cxx_destruct;
- (id)description;

@end
