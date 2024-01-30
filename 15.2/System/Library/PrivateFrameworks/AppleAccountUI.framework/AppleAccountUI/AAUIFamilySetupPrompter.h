@class NSString, FAFamilySetupPrompter;
@protocol AAUIFamilySetupPrompterDelegate;

@interface AAUIFamilySetupPrompter : NSObject <FAFamilySetupPrompterDelegate> {
    FAFamilySetupPrompter *_familySetupPrompter;
}

@property (weak, nonatomic) id<AAUIFamilySetupPrompterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithiTunesAccount:(id)a0;
- (void)promptIfEligibleWithPresentingViewController:(id)a0 isFirstRun:(BOOL)a1;
- (void)familySetupPrompterDidFinish:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
