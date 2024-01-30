@class NSNumber, NSString;

@interface SGMITokenCounts : NSObject

@property (readonly) NSNumber *salientCount;
@property (readonly) NSNumber *regularCount;
@property (readonly) NSString *token;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSalientCount:(id)a0 regularCount:(id)a1 token:(id)a2;
- (id)initWithCount:(id)a0 asSalient:(BOOL)a1 token:(id)a2;
- (id)newByAdding:(id)a0 asSalient:(BOOL)a1;

@end
