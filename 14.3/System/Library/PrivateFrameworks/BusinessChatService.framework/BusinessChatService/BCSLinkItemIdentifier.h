@class NSURL, NSString, NSObject;

@interface BCSLinkItemIdentifier : NSObject <BCSItemIdentifying>

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *fullHash;
@property (nonatomic) long long computedTruncatedHash;
@property (readonly, nonatomic) NSObject *itemIdentifier;
@property (readonly, nonatomic) long long truncatedHash;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierWithURL:(id)a0;
+ (id)identifierWithHash:(id)a0;
+ (id)identifierWithNormalizedURL:(id)a0;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)matchesItemIdentifying:(id)a0;
- (id)_initWithNormalizedURL:(id)a0;
- (id)_initWithHash:(id)a0;
- (id)_fullHashForNormalizedURL:(id)a0;
- (long long)_truncatedHashForNormalizedURL:(id)a0;
- (long long)_truncatedHashForHash:(id)a0;

@end
