@class NSString, PSSpecifier, PSListController;

@interface PSUIDataModeSubgroup : NSObject <PSSpecifierGroup> {
    PSListController *_hostController;
    PSSpecifier *_parentSpecifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
