@class NSString;

@interface SSFamilyCircleRequest : SSRequest <SSXPCCoding>

@property (nonatomic) long long authenticationPromptStyle;
@property (nonatomic) BOOL fetchITunesAccountNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
