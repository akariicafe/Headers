@class NSString, NSArray, INImage;

@interface SFPeopleSuggestion : NSObject <SFPeopleSuggestion>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isRestricted;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *transportBundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) INImage *donatedImage;
@property (readonly, nonatomic) BOOL isGroup;
@property (readonly, copy, nonatomic) NSArray *formattedHandles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 transportBundleIdentifier:(id)a2 contacts:(id)a3 formattedHandles:(id)a4 donatedImage:(id)a5;

@end
