@class NSString, REElement;

@interface NTKUpNextElement : NSObject

@property (readonly, nonatomic) NSString *elementIdentifier;
@property (retain, nonatomic) REElement *element;

+ (id)elementWithREElement:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithREElement:(id)a0;

@end
