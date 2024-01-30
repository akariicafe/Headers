@class NSString, NSArray, NSMutableArray;

@interface CAState : NSObject <NSSecureCoding, NSCopying> {
    NSMutableArray *_elements;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy) NSString *basedOn;
@property (getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSArray *elements;
@property double nextDelay;
@property double previousDelay;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (getter=isInitial) BOOL initial;

+ (void)CAMLParserStartElement:(id)a0;

- (id)CAMLTypeForKey:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (void)foreachLayer:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addElement:(id)a0;
- (id)init;
- (void)removeElement:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)debugDescription;

@end
