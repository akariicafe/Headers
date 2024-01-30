@class NSString, NSMutableArray;

@interface TSCEQuotedRefPathSplitter : NSObject {
    NSMutableArray *_quotedComponents;
}

@property (retain, nonatomic) NSString *localizedBlankGroupName;
@property (retain, nonatomic) NSString *localizedErrorGroupName;
@property (retain, nonatomic) NSString *localizedTrueGroupName;
@property (retain, nonatomic) NSString *localizedFalseGroupName;
@property (retain, nonatomic) NSString *localizedTrueGroupNameForColumn;
@property (retain, nonatomic) NSString *localizedFalseGroupNameForColumn;
@property (nonatomic) BOOL forceSplitting;

+ (BOOL)isLeftParen:(id)a0;
+ (BOOL)isRightParen:(id)a0;
+ (BOOL)isSingleQuote:(id)a0;
+ (id)refPathInterestingCharactersSet;
+ (BOOL)isSingleQuotePair:(id)a0 ch2:(id)a1;
+ (BOOL)isDollar:(id)a0;
+ (BOOL)isColon:(id)a0;

- (void)addComponent:(id)a0;
- (id)componentAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)description;
- (void)splitRefPath:(id)a0;
- (id)initWithReferenceString:(id)a0;
- (id)initWithComponents:(id)a0 aggregateFunction:(id)a1;
- (unsigned long long)numComponents;

@end
