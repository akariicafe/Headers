@class NSString, NSIndexPath, TUCall;

@interface RTTUtteranceRequest : NSObject

@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NSString *string;
@property (weak, nonatomic) NSIndexPath *cellIndexPath;
@property (retain, nonatomic) TUCall *call;

+ (id)utteranceRequestWithIndex:(unsigned long long)a0 forString:(id)a1 inCellPath:(id)a2 call:(id)a3;

- (void).cxx_destruct;
- (id)description;

@end
