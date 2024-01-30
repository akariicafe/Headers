@class NSArray, NSDate;
@protocol _SFServiceIdentifier;

@interface SFCredentialSearchFilter_Ivars : NSObject {
    NSDate *minimumCreationDate;
    NSDate *maximumCreationDate;
    NSDate *minimumModificationDate;
    NSDate *maximumModificationDate;
    NSArray<_SFServiceIdentifier> *serviceIdentifiers;
    NSArray *usernames;
}

- (void).cxx_destruct;

@end
