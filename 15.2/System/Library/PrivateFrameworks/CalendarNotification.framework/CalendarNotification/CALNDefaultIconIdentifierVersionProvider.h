@class NSString;

@interface CALNDefaultIconIdentifierVersionProvider : NSObject <CALNIconIdentifierVersionProvider>

@property (nonatomic) long long iconIdentifierVersion;
@property (readonly, nonatomic) long long iconVersionToUpgradeTo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
