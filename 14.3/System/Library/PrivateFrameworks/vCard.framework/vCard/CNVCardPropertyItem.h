@class NSString;

@interface CNVCardPropertyItem : NSObject

@property (readonly) id value;
@property (readonly) NSString *label;
@property (readonly) NSString *identifier;

+ (id)itemWithValue:(id)a0 label:(id)a1 identifier:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithValue:(id)a0 label:(id)a1 identifier:(id)a2;

@end
