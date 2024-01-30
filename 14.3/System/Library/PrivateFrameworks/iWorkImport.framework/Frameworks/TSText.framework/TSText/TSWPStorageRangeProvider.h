@class NSString, NSObject;

@interface TSWPStorageRangeProvider : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject *object;

- (unsigned long long)rangeEnd;
- (void).cxx_destruct;
- (unsigned long long)rangeStart;
- (id)initWithIdentifier:(id)a0;
- (void)setRangeStart:(unsigned long long)a0;
- (unsigned long long)rangeLength;
- (void)nextRange;

@end
