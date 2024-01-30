@class NSString, NSURL, NSDate;

@interface SXEmbedResource : SXResource <SXEmbedResource>

@property (readonly, nonatomic) NSString *HTML;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)expirationDateWithValue:(id)a0 withType:(int)a1;

@end
