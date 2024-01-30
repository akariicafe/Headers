@class NSArray, NSString;

@interface SWCollaborationShareOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *optionsGroups;
@property (copy, nonatomic) NSString *summary;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)shareOptionsWithOptionsGroups:(id)a0 summary:(id)a1;
+ (id)shareOptionsWithOptionsGroups:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOptionsGroups:(id)a0;
- (id)initWithOptionsGroups:(id)a0 summary:(id)a1;
- (BOOL)isEqualToShareOptions:(id)a0;

@end
