@class NSString, NSDictionary;

@interface IKPlayerContextMenuItemDidSelectEventUserInfo : NSObject <IKPlayerEventMarshaling>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
