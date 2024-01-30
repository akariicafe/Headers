@class NSNumber, NSString, NSMutableDictionary;

@interface APOdmlDESAdRecordContents : NSObject

@property (retain, nonatomic) NSNumber *originalIndex;
@property (readonly, nonatomic) NSString *instanceID;
@property (retain, nonatomic) NSMutableDictionary *odmlData;
@property (retain, nonatomic) NSString *responseType;
@property (readonly, nonatomic) NSString *adamID;
@property (retain, nonatomic) NSNumber *rerankedIndex;
@property (nonatomic) BOOL addImpression;
@property (nonatomic) BOOL addTap;

- (id)recordData;
- (void)collectODMLResponse:(id)a0;
- (id)initWithInstanceID:(id)a0 adamID:(id)a1 originalIndex:(unsigned long long)a2 responseType:(id)a3;
- (void).cxx_destruct;
- (void)updateEvent:(long long)a0;

@end
