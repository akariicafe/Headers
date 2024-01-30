@class NSString, NSDate;

@interface DAOofParams : NSObject

@property (nonatomic) int oofState;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) int externalState;
@property (retain, nonatomic) NSString *externalMessage;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentationForASSettingTask;
- (void)enableOof:(BOOL)a0 From:(id)a1 to:(id)a2 withMessage:(id)a3;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEnabled;

@end
