@class NSString;

@interface HSComponentCheckTristar : HSComponentCheckBase {
    NSString *tristarID;
}

+ (id)sharedSingleton;

- (id)init;
- (void).cxx_destruct;
- (id)querySN;
- (id)getTristarID:(id)a0;

@end
