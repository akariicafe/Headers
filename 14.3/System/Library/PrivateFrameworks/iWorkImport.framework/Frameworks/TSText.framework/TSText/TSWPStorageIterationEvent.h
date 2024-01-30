@class NSString, TSWPStorage, NSObject;

@interface TSWPStorageIterationEvent : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSObject *object;
@property (nonatomic) TSWPStorage *storage;

+ (id)eventWithType:(int)a0 providerIdentifier:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 object:(id)a3;
+ (id)characterEventWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(int)a0 providerIdentifier:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 object:(id)a3;
- (id)initWithCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isRangeEnd;

@end
