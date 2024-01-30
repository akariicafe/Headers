@class NSNumber, APOdmlVector;

@interface APOdmlDESData : NSObject

@property (retain, nonatomic) APOdmlVector *appVector;
@property (retain, nonatomic) NSNumber *pTTRLogit;

- (id)recordData;
- (void)collectODMLResponse:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)overrideVector:(id)a0 vector:(id)a1 type:(id)a2;

@end
