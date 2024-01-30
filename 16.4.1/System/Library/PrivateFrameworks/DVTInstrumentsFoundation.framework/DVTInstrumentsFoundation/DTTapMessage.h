@class NSMutableDictionary;

@interface DTTapMessage : NSObject <NSSecureCoding> {
    NSMutableDictionary *_plist;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int kind;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)plist;
- (id)init;
- (void).cxx_destruct;
- (id)initAsKind:(int)a0;

@end
