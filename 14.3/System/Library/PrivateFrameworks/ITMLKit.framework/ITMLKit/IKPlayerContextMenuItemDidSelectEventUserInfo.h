@class NSString, NSDictionary;

@interface IKPlayerContextMenuItemDidSelectEventUserInfo : NSObject <IKPlayerEventMarshaling>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
