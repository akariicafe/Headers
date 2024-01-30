@class NSString;

@interface _PLDescriptionStyle : NSObject

@property (readonly, copy) NSString *initialFieldSeparator;
@property (readonly, copy) NSString *fieldSeparator;
@property (readonly, copy) NSString *nameValueSeparator;
@property (readonly, copy) NSString *suffix;
@property (readonly) long long extraIndent;
@property (readonly) BOOL prettyPrint;

+ (id)styleForEnum:(long long)a0;

- (void).cxx_destruct;
- (id)descriptionForObject:(id)a0 withIndent:(long long)a1;
- (id)initWithIntialFieldSeparator:(id)a0 fieldSeparator:(id)a1 nameValueSeparator:(id)a2 suffix:(id)a3 extraIndent:(long long)a4 prettyPrint:(BOOL)a5;

@end
