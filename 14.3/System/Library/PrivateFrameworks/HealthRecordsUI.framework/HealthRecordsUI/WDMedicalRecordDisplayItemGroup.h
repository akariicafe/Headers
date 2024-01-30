@class NSArray, WDMedicalRecordDaySummary, NSString;

@interface WDMedicalRecordDisplayItemGroup : NSObject

@property (retain, nonatomic) WDMedicalRecordDaySummary *daySummary;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSArray *displayItems;

+ (id)displayItemGroupWithDaySummary:(id)a0;
+ (id)displayItemGroupWithDisplayItems:(id)a0;

- (void).cxx_destruct;
- (id)displayItemAtIndex:(long long)a0;
- (long long)numberOfDisplayItems;

@end
