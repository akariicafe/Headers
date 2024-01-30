@class NSString, ICASLayoutType, NSNumber;

@interface ICASLayoutData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASLayoutType *layoutType;
@property (readonly, nonatomic) NSNumber *isTimelineView;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithLayoutType:(id)a0 isTimelineView:(id)a1;

@end
