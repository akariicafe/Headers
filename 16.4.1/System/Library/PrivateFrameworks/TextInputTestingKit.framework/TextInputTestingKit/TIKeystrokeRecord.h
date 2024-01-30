@class TIPointError, NSString, NSArray, TIKeyboardTouchEvent;

@interface TIKeystrokeRecord : NSObject

@property (copy, nonatomic) NSString *intendedKey;
@property (retain, nonatomic) TIPointError *touchError;
@property (retain, nonatomic) TIKeyboardTouchEvent *touch;
@property (copy, nonatomic) NSString *touchedKey;
@property (copy, nonatomic) NSString *insertedKey;
@property (copy, nonatomic) NSString *documentState;
@property (retain, nonatomic) NSArray *predictionBarState;

+ (id)keystrokeRecord;

- (id)init;
- (void).cxx_destruct;

@end
