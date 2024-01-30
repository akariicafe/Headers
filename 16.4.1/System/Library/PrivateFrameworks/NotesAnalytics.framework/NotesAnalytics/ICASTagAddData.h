@class NSString, NSNumber, ICASTagAddApproach;

@interface ICASTagAddData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *isExistingTag;
@property (readonly, nonatomic) ICASTagAddApproach *tagAddApproach;
@property (readonly, nonatomic) NSNumber *isAutoConversionEnabled;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithIsExistingTag:(id)a0 tagAddApproach:(id)a1 isAutoConversionEnabled:(id)a2;

@end
