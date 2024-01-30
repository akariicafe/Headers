@class NSString, REElement;

@interface NTKUpNextElement : NSObject

@property (readonly, nonatomic) NSString *elementIdentifier;
@property (retain, nonatomic) REElement *element;

+ (id)elementWithREElement:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithREElement:(id)a0;

@end
