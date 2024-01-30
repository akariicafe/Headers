@class NSString, ICASStyleType;

@interface ICASStyleData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASStyleType *styleType;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithStyleType:(id)a0;

@end
