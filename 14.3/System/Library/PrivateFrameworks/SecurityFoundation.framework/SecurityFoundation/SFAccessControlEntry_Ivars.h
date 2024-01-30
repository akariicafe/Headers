@class NSString;

@interface SFAccessControlEntry_Ivars : NSObject {
    NSString *bundleID;
    struct { unsigned char isOwner : 1; unsigned char canRead : 1; unsigned char canWrite : 1; } accessControlEntryFlags;
}

- (void).cxx_destruct;

@end
