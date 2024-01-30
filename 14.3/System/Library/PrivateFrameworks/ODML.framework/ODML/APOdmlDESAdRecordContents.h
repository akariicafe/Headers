@class NSString, ADVector, NSNumber;

@interface APOdmlDESAdRecordContents : NSObject

@property (retain, nonatomic) NSString *adamID;
@property (readonly, nonatomic) NSString *instanceID;
@property (nonatomic) BOOL addImpression;
@property (nonatomic) BOOL addTap;
@property (retain, nonatomic) ADVector *appVector;
@property (retain, nonatomic) NSNumber *pTTRLogit;

- (void).cxx_destruct;
- (id)recordData;
- (id)initWithInstanceID:(id)a0 adamID:(id)a1;
- (void)collectODMLResponse:(id)a0;
- (void)overrideVector:(id)a0 vector:(id)a1 type:(id)a2;

@end
