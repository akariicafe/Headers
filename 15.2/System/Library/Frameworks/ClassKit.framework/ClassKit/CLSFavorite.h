@class NSArray, NSString, NSURL;

@interface CLSFavorite : CLSObject {
    NSString *_title;
    NSString *_storeIdentifier;
}

@property (retain, nonatomic) NSArray *contextIdentifierPath;
@property (retain, nonatomic) NSString *contextSummary;
@property (retain, nonatomic) NSString *contextCustomTypeName;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) int type;
@property (nonatomic) long long contextType;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *contentStoreIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)validateObject:(id *)a0;
- (id)initWithTitle:(id)a0 contextIdentifierPath:(id)a1 URL:(id)a2 type:(int)a3 contextType:(long long)a4 andBundleIdentifier:(id)a5 contentStoreIdentifier:(id)a6 contextSummary:(id)a7 contextCustomTypeName:(id)a8;
- (id)initWithTitle:(id)a0 context:(id)a1;
- (id)initWithTitle:(id)a0 URL:(id)a1 andBundleIdentifier:(id)a2;

@end
