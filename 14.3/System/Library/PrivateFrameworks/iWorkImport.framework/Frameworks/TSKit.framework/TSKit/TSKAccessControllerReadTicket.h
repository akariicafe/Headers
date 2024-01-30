@class NSString, TSKAccessController;

@interface TSKAccessControllerReadTicket : NSObject <TSKAccessControllerReadTicket> {
    TSKAccessController *_accessController;
    _Atomic int _accessCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
