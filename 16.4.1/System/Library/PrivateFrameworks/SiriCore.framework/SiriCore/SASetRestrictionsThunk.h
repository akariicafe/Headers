@interface SASetRestrictionsThunk : SASetRestrictions {
    id /* block */ _thunk;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithThunk:(id /* block */)a0;
- (void)siriCore_invokeThunk;

@end
