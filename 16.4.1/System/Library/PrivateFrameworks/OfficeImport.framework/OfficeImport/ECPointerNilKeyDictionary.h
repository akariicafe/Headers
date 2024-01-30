@interface ECPointerNilKeyDictionary : OITSUPointerKeyDictionary {
    id mNilKeyObject;
}

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forUncopiedKey:(id)a1;

@end
