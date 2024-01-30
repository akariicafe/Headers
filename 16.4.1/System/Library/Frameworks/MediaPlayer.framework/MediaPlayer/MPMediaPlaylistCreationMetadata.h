@class NSString;

@interface MPMediaPlaylistCreationMetadata : NSObject {
    NSString *_defaultAuthorDisplayName;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *authorDisplayName;
@property (copy, nonatomic) NSString *descriptionText;

- (id)initWithName:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
