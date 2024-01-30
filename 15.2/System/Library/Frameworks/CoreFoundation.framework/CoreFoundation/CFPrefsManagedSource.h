@interface CFPrefsManagedSource : CFPrefsPlistSource

- (BOOL)managed;
- (void)alreadylocked_setPrecopiedValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 from:(id)a3;

@end
