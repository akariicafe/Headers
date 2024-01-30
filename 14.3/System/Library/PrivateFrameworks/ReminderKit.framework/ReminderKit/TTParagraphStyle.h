@class NSUUID, NSString;

@interface TTParagraphStyle : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, TTModelAttributeComparable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int style;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) long long writingDirection;
@property (nonatomic) unsigned long long indent;
@property (nonatomic) unsigned long long startingItemNumber;
@property (nonatomic) unsigned int hints;
@property (nonatomic) BOOL needsParagraphCleanup;
@property (nonatomic) BOOL needsListCleanup;
@property (readonly, nonatomic) BOOL canIndent;
@property (readonly, nonatomic) BOOL isList;
@property (readonly, nonatomic) BOOL isHeader;
@property (readonly, nonatomic) BOOL uniqueToLine;
@property (readonly, nonatomic) BOOL preferSingleLine;
@property (readonly, nonatomic) BOOL wantsFollowingNewLine;
@property (readonly, nonatomic) NSUUID *trackingUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)textAlignmentForParagraphStyleAlignment:(int)a0;
+ (int)paragraphStyleAlignmentForTextAlignment:(unsigned long long)a0;
+ (id)paragraphStyleNamed:(unsigned int)a0;
+ (id)defaultParagraphStyle;

- (id)serialize;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)initWithArchive:(const struct ParagraphStyle { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; unsigned int x4; int x5; int x6; int x7; struct Todo *x8; unsigned int x9; unsigned int x10; } *)a0;
- (BOOL)isEqualToParagraphStyle:(id)a0;
- (BOOL)isUnknownStyle;
- (BOOL)isEqualToModelParagraphStyle:(id)a0;
- (BOOL)isEqualToModelComparable:(id)a0;
- (id)listBulletInAttributedString:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct ParagraphStyle { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; unsigned int x4; int x5; int x6; int x7; struct Todo *x8; unsigned int x9; unsigned int x10; } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
