@class NSUUID, NSString, _CDMDCSContextualPredicate, _CDContextualPredicate, NSSet, NSArray;

@interface REDuetContextQuery : NSObject {
    NSArray *_searchKeyPaths;
    id /* block */ _evalBlock;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) _CDContextualPredicate *predicate;
@property (readonly, nonatomic) _CDMDCSContextualPredicate *remotePredicate;
@property (readonly, nonatomic) NSString *registrationID;
@property (readonly, nonatomic) NSSet *keyPaths;
@property (retain, nonatomic) NSSet *devices;

- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 remotePredicate:(id)a1 name:(id)a2 evaluationBlock:(id /* block */)a3;
- (id)_localRegistrationWithCallback:(id /* block */)a0;
- (id)_remoteRegistrationForDevice:(id)a0 callback:(id /* block */)a1;
- (id)_sortedKeyPaths:(id)a0;
- (id)_keyPathsForDevice:(id)a0;
- (id)_localKeyPaths;
- (id)createRegistrationsWithCallback:(id /* block */)a0;
- (id)valueFromUserContext:(id)a0;

@end
